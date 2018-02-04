/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHALibraryChangeBuffer : NSObject {
    NSMutableDictionary * _assetIdentifierToFlagsMap;
    NSMutableArray * _momentChanges;
    NSMutableArray * _personChanges;
    NSMutableSet * _representedAssetJobScenarios;
}

@property (retain) NSMutableDictionary *assetIdentifierToFlagsMap;
@property (retain) NSMutableArray *momentChanges;
@property (retain) NSMutableArray *personChanges;
@property (retain) NSMutableSet *representedAssetJobScenarios;
@property (readonly) unsigned long long uniqueChangeObjectCount;

- (void).cxx_destruct;
- (void)addMomentChange:(id)arg1;
- (void)addPersonChange:(id)arg1;
- (id)assetIdentifierToFlagsMap;
- (id)changedAssetIdentifiers;
- (void)drain;
- (bool)hasAssetChanges;
- (bool)hasChanges;
- (bool)hasMomentChanges;
- (bool)hasPersonChanges;
- (id)init;
- (void)mergeFlags:(int)arg1 forAssetWithIdentifier:(id)arg2;
- (void)mergeRepresentedJobScenario:(unsigned long long)arg1;
- (id)momentChanges;
- (id)personChanges;
- (id)representedAssetJobScenarios;
- (bool)representsUserForegroundJobScenario;
- (void)setAssetIdentifierToFlagsMap:(id)arg1;
- (void)setMomentChanges:(id)arg1;
- (void)setPersonChanges:(id)arg1;
- (void)setRepresentedAssetJobScenarios:(id)arg1;
- (id)snapshotAndDrain;
- (unsigned long long)uniqueChangeObjectCount;

@end
