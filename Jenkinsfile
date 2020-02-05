pipeline 
{
    agent any 
    
    environment 
    {
        CPPUTEST_HOME = "/opt/cpputest"
    }
    
    stages 
    {    
        stage('Unit Test') 
        { 
            steps 
            {
                sh '''
                    cd tests
                    make
                    ./test_tests -ojunit
                '''       
            }
        }
    }
    
    post 
    {
        always 
        {
            junit 'tests/*.xml'
        }
    }
}
