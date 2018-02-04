/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcList : NSObject {
    NSMutableDictionary * allProcs;
    bool  appsOnly;
    NSMutableDictionary * filteredProcs;
    bool  ownedOnly;
    NSLock * procLock;
}

- (void).cxx_destruct;
- (void)_populateFromSystem;
- (void)addProcInfo:(id)arg1;
- (id)allNames;
- (id)allPIDs;
- (id)allPathNames;
- (id)allProcInfos;
- (bool)appsOnly;
- (unsigned long long)count;
- (id)init;
- (id)newestProcInfo;
- (id)newestProcInfoWithName:(id)arg1;
- (bool)ownedOnly:(bool)arg1;
- (id)procInfoWithPID:(int)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)setAppsOnly:(bool)arg1;
- (void)setOwnedOnly:(bool)arg1;
- (void)setProcInfos:(id)arg1;
- (bool)update;
- (bool)updateFromSystem;

@end
