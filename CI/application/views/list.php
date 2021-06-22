<?php include 'header.php' ?>
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
	<div class="container">
		<h2 class="p-2"> View Users</h2>
		<div style="margin-left: 80%;">
			 <th> <?= anchor("user/addUser", "Add", ['class' => 'btn btn-primary']);?></th>
		</div>
		<table class="table">
			<thead>
				<tr>
					<th>NO</th>
					<th>Name</th>
					<th>Address</th>
					<th>Mobile No</th>
					<th></th>
					<th></th>
					
				</tr>
			</thead>
			<tbody>
				<?php if(!empty($users)){
                   foreach ($users as $user){
                      
				 ?>
				    <tr>
					  <th> <?= $user->id; ?></th>
					  <th> <?= $user->name; ?></th>
					  <th> <?= $user->addr; ?></th>
					  <th> <?= $user->mno; ?></th>
					  <th> <?= anchor("user/edit/{$user->id}", "Update", ['class' => 'btn btn-success']);?></th>
					  <th> <?= anchor("user/delete/{$user->id}", "Delete", ['class' => 'btn btn-danger']);?></th>
				    </tr>
				<?php }} else { ?>
				<tr> 
                    <th class =" text-danger" colspan="5"> Record Not Found...</th>
				</tr>
			<?php }?>
			</tbody>
			
		</table>
	</div>
	
</body>
</html>