<?php 
 	
 	class user_model extends CI_model {

 		//add user
 		public function add($user){
 			$this->db->insert('user', $user);
 		}

 		//get all users
 		public function getUsers() {
 			return $this->db->get('user')->result();
 		}

 		//get user
 		public function getUser($id) {
 			return $this->db->where('id', $id)
 			->get('user')->row();
 		}

 		//update
 		public function update($id, $data) {
 			return $this->db->where('id', $id)
 			->update('user', $data);
 		}

 		//delete user
 		public function delete($id) {
 			return $this->db->delete('user', ['id' => $id]);
 		}

 	}

?>