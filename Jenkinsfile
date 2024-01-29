pipeline {
	agent any
	stages {
		stage('Build') {
			steps {
				checkout scm
				bat 'gcc -Wall -c main.c'
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