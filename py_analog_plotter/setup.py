from setuptools import setup

setup(name = 'analog_plotter', 
	version = '1.0', 
	entry_points = {
		'console_scripts': [
			'pyAnPlot = source.__main__:main'
		]
	},
)