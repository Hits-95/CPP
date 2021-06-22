<?php 
	class user extends CI_Controller {

		//show list of users...
		public function index() {
			$data['users'] = $this->user_model->getUsers();
			$this->load->view('list', $data);

		}

		public function addUser() {

			 $this->form_validation->set_rules('name', "Name", 'required');
			 $this->form_validation->set_rules('addr', "Address", 'required');
			 $this->form_validation->set_rules('mno', "Mobile No", 'required');

			 if($this->form_validation->run() == false)
			 	 $this->load->view('add');
			 else{
			 	//save data into database
			 	$post = $this->input->post();
			 	$this->user_model->add($post);
			 	return redirect('user/');
			 }


		}

		 //edit user
			 public function edit($id) {
			 	$data['user'] = $this->user_model->getUser($id);
			 	$this->load->view('edit', $data);
			 }

		//update
		public function update($id){
	    	$this->user_model->update($id, $this->input->post());
	    	return redirect('user/');
		}

		public function delete($id) {
			$this->user_model->delete($id);
			return redirect('user/');
		}
	}

?>
