import timeit                                                                   #import module to calculate execution time                                              

code_to_time = """
import matlab.engine                                                            #import matlab external user interface
eng = matlab.engine.connect_matlab('Matlab2406')                                #connect to matlab shared session by session name
                                                                                #nargout is sued to handle output as python will throw errors when dealing with large array outputs
                                                                                #with the matlab API.
eng.cd(r'D:\YEAR 2\Big Data\Scaled Data\Scaled Data', nargout=0)                #navigate to folder path of matlab script
eng.ls(nargout=0)
eng.ddc2(nargout=0)                                                             #run the matlab script
#eng.eval('ddc2.m')
eng.quit()  
"""

                                                                                #timeit requires a string so code to be timed appears in """...""" like a docstring
elapsed_time = timeit.timeit(code_to_time,number=1)                             #calculate time taken for one cycle         
print(elapsed_time)  


#matlab.engine.find_matlab()
#To connect to matlab shared session by finding a particular session, use the above function.
