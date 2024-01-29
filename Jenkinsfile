pipeline {
	agent { docker { image 'gcc' } }
	stages {
		stage('Build') {
			steps {
				//checkout scm
				sh 'make'
			}
			post {
				success {
					echo 'OK'
				}
				failure {
					echo 'Fail'
				}
			}
		}
	}
}