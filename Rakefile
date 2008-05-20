# vim: syntax=Ruby

require 'hoe'

$:.unshift 'lib'
require 'memcache'

hoe = Hoe.new 'memcache-client', MemCache::VERSION do |p|
  p.summary = 'A Ruby memcached client'
  p.description = p.paragraphs_of('README.txt', 8).first
  p.author = ['Eric Hodel', 'Robert Cottrell', 'FiveRuns']
  p.email = 'mike@fiveruns.com'
  p.url = p.paragraphs_of('README.txt', 6).first
  p.changes = File.read('History.txt').scan(/\A(=.*?)^=/m).first.first

  p.rubyforge_name = 'seattlerb'
  p.extra_deps << ['ZenTest', '>= 3.4.2']
end

