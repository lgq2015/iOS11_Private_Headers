/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMPersonRegistrar : NSObject {
    NSMutableDictionary * _personMap;
}

@property (retain) NSMutableDictionary *_personMap;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dumpAllPersons;
- (id)_personMap;
- (id)personForUniqueID:(id)arg1;
- (void)registerPerson:(id)arg1;
- (void)set_personMap:(id)arg1;
- (void)unregisterPerson:(id)arg1;

@end
