pipeline {
	agent any
	stages {
		stage('Build') {
			steps {
				checkout scm
				sh 'ls'
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