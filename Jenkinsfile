pipeline {
	agent any
	stages {
		stage('Build') {
			steps {
				checkout scm
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