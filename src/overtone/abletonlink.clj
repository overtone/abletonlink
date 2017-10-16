(ns overtone.abletonlink
  (:import [LinkBindings]))


(def AbletonLink (new LinkBindings))

(defn link-enable [enable?]
  (.enable AbletonLink enable?))

(defn link-is-enabled []
  (.isEnabled AbletonLink))

(defn link-get-beat []
  (.getBeat AbletonLink))

(defn link-set-beat [beat]
  (.setBeat AbletonLink beat))

(defn link-set-beat-force [beat]
  (.setBeatForce AbletonLink beat))

(defn link-get-phase []
  (.getPhase AbletonLink))

(defn link-get-bpm []
  (.getBpm AbletonLink))

(defn link-set-bpm [bpm]
  (.setBpm AbletonLink bpm))

(defn link-get-num-peers []
  (.getNumPeers AbletonLink))

(defn link-set-quantum [quantum]
  (.setQuantum AbletonLink quantum))

(defn link-get-quantum []
  (.getQuantum AbletonLink))

(defn link-update []
  (.update AbletonLink))

(comment

  (link-enable true)

  (link-is-enabled)
  
  (link-update)

  (link-get-beat)

  (link-get-bpm)

  (link-set-bpm 139.0)

  (link-get-num-peers))


