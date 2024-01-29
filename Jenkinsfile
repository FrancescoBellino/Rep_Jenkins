pipeline {
	agent any
	stages {
		stage('Build') {
			steps {
				checkout scm
				bat 'more main.c'
			}
		}
	}
}