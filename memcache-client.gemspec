Gem::Specification.new do |s|
	s.name = 'memcache-client'
	s.version = '1.5.0.4'
	s.authors = ['Eric Hodel', 'Robert Cottrell', 'Mike Perham']
	s.email = 'mperham@gmail.com'
	s.homepage = 'http://github.com/fiveruns/memcache-client'
	s.summary = 'A Ruby-based memcached client library'
	s.description = s.summary
	s.extensions << 'ext/crc32/extconf.rb'

	s.require_path = 'lib'

	s.files = ["README.txt", "License.txt", "History.txt", "Rakefile", "lib/memcache.rb", "lib/memcache_util.rb", "ext/crc32/crc32.c"]
	s.test_files = ["test/test_mem_cache.rb"]
end
