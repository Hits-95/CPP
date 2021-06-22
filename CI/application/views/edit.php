<?php include 'header.php'; ?>
<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
	
	<div class="container mt-2">
		<h2> Edit User </h2>
		<?= form_open("user/update/{$user->id}");  ?>

		<div class="row mt-2">
			<div class="col-lg-6">
				<label>Name</label>
				<?= form_input(['name'=>'name', 'class'=>'form-control', 'placeholder'=>'Enter name ...', 'value'=> set_value('name', $user->name)]); ?>
			</div>
			<div class="col-lg-6">
				<?= form_error('name') ?>
			</div>
		</div>

		<div class="row mt-2">
			<div class="col-lg-6">
				<label>Address</label>
				<?= form_textarea(['name'=>'addr', 'class'=>'form-control', 'placeholder'=>'Enter address ...', 'value'=> set_value('addr', $user->addr)]); ?>
			</div>
			<div class="col-lg-6">
				<?= form_error('addr') ?>
			</div>
		</div>

		<div class="row mt-2">
			<div class="col-lg-6">
				<label>Mobile No</label>
				<?= form_input(['name'=>'mno', 'class'=>'form-control', 'placeholder'=>'Enter mobile no ...', 'value'=> set_value('mno', $user->mno)]); ?>
			</div>
			<div class="col-lg-6">
				<?= form_error('mno') ?>
			</div>
		</div>

		<div class="row mt-3 text-center">
			<div class="col-lg-6">
				<?= form_submit(['type'=>'submit', 'value' => 'Update', 'class'=> 'btn btn-primary']);?>
				<?= anchor('user/', 'Cancel',['class'=>'btn btn-danger']); ?>

			</div>
			<div class="col-lg-6"></div>
		</div>

	</div>

</body>
</html>