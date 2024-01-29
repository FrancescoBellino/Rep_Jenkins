pipeline {
	agent any
	stages {
		stage('Build') {
			steps {
				checkout scm
				bat 'make'
			}
			post {
				success {
					echo 'OK'
				}
				failed {
					echo 'Fail'
				}
			}
		}
	}
}