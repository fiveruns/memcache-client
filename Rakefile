# vim: syntax=Ruby
require 'rubygems'
require 'rake/rdoctask'
require 'spec/rake/spectask'

task :gem do
	sh "gem build memcache-client.gemspec"
end

task :install => [:gem] do
	sh "sudo gem install memcache-client-*.gem"
end

Spec::Rake::SpecTask.new do |t|
	t.ruby_opts = ['-rtest/unit']
	t.spec_files = FileList['test/test_*.rb']
	t.fail_on_error = true
end
  
Rake::RDocTask.new do |rd|
	rd.main = "README.rdoc"
	rd.rdoc_files.include("README.rdoc", "lib/**/*.rb")
	rd.rdoc_dir = 'doc'
end
