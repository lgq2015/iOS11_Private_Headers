/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

@interface ASAObject : NSObject {
    unsigned int  _objectID;
}

@property (nonatomic, readonly) unsigned int baseClass;
@property (nonatomic, readonly) unsigned int objectClass;
@property (nonatomic, readonly) unsigned int objectID;
@property (nonatomic, readonly, copy) NSArray *ownedObjectIDs;
@property (nonatomic, readonly) unsigned int ownerID;

- (unsigned int)baseClass;
- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (bool)getGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)getInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)getMasterGlobalProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)getMasterInputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)getMasterOutputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int*)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)getOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int*)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)getProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withData:(void*)arg4 ofSize:(unsigned int*)arg5 withQualifier:(void*)arg6 ofSize:(unsigned int)arg7;
- (bool)hasGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)hasInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)hasMasterGlobalProperty:(unsigned int)arg1;
- (bool)hasMasterInputProperty:(unsigned int)arg1;
- (bool)hasMasterOutputProperty:(unsigned int)arg1;
- (bool)hasOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)hasProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3;
- (id)init;
- (id)initWithAudioObjectID:(unsigned int)arg1;
- (bool)isGlobalPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)isInputPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)isMasterGlobalPropertySettable:(unsigned int)arg1;
- (bool)isMasterInputPropertySettable:(unsigned int)arg1;
- (bool)isMasterOutputPropertySettable:(unsigned int)arg1;
- (bool)isOutputPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (bool)isPropertySettable:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3;
- (unsigned int)objectClass;
- (unsigned int)objectID;
- (bool)onQueue:(id)arg1 forGlobalProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forGlobalProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forInputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forInputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned int)arg2 addListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned int)arg2 removeListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterInputProperty:(unsigned int)arg2 addListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterInputProperty:(unsigned int)arg2 removeListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterOutputProperty:(unsigned int)arg2 addListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forMasterOutputProperty:(unsigned int)arg2 removeListener:(id /* block */)arg3;
- (bool)onQueue:(id)arg1 forOutputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forOutputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(id /* block */)arg4;
- (bool)onQueue:(id)arg1 forProperty:(unsigned int)arg2 scope:(unsigned int)arg3 ofElement:(unsigned int)arg4 addListener:(id /* block */)arg5;
- (bool)onQueue:(id)arg1 forProperty:(unsigned int)arg2 scope:(unsigned int)arg3 ofElement:(unsigned int)arg4 removeListener:(id /* block */)arg5;
- (id)ownedObjectIDs;
- (unsigned int)ownerID;
- (bool)setGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)setInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)setMasterGlobalProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)setMasterInputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)setMasterOutputProperty:(unsigned int)arg1 withData:(void*)arg2 ofSize:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;
- (bool)setOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void*)arg3 ofSize:(unsigned int)arg4 withQualifier:(void*)arg5 ofSize:(unsigned int)arg6;
- (bool)setProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withData:(void*)arg4 ofSize:(unsigned int)arg5 withQualifier:(void*)arg6 ofSize:(unsigned int)arg7;
- (unsigned int)sizeOfGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void*)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void*)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfMasterGlobalProperty:(unsigned int)arg1 withQualifier:(void*)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfMasterInputProperty:(unsigned int)arg1 withQualifier:(void*)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfMasterOutputProperty:(unsigned int)arg1 withQualifier:(void*)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void*)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withQualifier:(void*)arg4 ofSize:(unsigned int)arg5;

@end
