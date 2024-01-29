pipeline {
	agent any
	stage('Build') {
		steps {
			checkout scm
			bat 'more main.c'
		}
	}
}