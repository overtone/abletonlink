(defproject abletonlink "1.0.0-SNAPSHOT"
  :description "Ableton Link native bindings for Overtone"
  :url "http://overtone.github.io/"
  :mailing-list {:name "overtone"
                 :archive "https://groups.google.com/group/overtone"
                 :post "overtone@googlegroups.com"}
  :license {:name "The MIT License (MIT)"
            :url "http://opensource.org/licenses/MIT"
            :distribution :repo
            :comments "Please use Overtone for good"}

  :dependencies [[org.clojure/clojure "1.9.0-alpha17"]]

  :jvm-opts [~(str "-Djava.library.path=native/abletonlive:"
                   (System/getenv "LD_LIBRARY_PATH"))]

  :java-source-paths ["src/overtone/java"]
  )
