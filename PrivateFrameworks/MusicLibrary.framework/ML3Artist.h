/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Artist : ML3Collection

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)allProperties;
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;
+ (id)databaseTable;
+ (id)defaultOrderingTerms;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertiesForGroupingUniqueCollections;
+ (bool)propertyIsCountProperty:(id)arg1;
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;
+ (long long)revisionTrackingCode;
+ (id)trackForeignPersistentID;

- (id)multiverseIdentifier;
- (id)protocolItem;
- (void)updateTrackValues:(id)arg1;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)propertyForMPMediaEntityProperty:(id)arg1;

@end
