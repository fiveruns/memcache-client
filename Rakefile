# vim: syntax=Ruby
require 'rubygems'
require 'rake/rdoctask'
require 'rake/testtask'

task :gem do
	sh "gem build memcache-client.gemspec"
end

task :install => [:gem] do
	sh "sudo gem install memcache-client-*.gem"
end

Rake::RDocTask.new do |rd|
	rd.main = "README.rdoc"
	rd.rdoc_files.include("README.rdoc", "lib/**/*.rb")
	rd.rdoc_dir = 'doc'
end

Rake::TestTask.new

task :default => :test
