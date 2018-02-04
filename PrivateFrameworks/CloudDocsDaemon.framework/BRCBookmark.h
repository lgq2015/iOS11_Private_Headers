/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCBookmark : NSObject {
    BRCAppLibrary * _appLibrary;
    NSData * _bookmarkData;
    bool  _containsItemID;
    bool  _dataResolved;
    BRCAccountSession * _session;
    BRCLocalItem * _target;
    BRCRelativePath * _targetRelpath;
    bool  _targetResolved;
    BRCServerZone * _targetServerZone;
}

@property (nonatomic, readonly) bool containsItemID;
@property (nonatomic, readonly) BRCLocalItem *target;
@property (nonatomic, readonly) BRCServerZone *targetServerZone;

+ (id)createName;
+ (void)unlinkAliasAtPath:(id)arg1;

- (void).cxx_destruct;
- (void)_computeSignature:(unsigned char)arg1;
- (bool)_resolveDataWithError:(id*)arg1;
- (bool)_resolveTargetWithError:(id*)arg1;
- (int)_validateSignatureWithFd:(int)arg1;
- (bool)containsItemID;
- (id)initWithRelpath:(id)arg1;
- (id)initWithTarget:(id)arg1 owningAppLibrary:(id)arg2 path:(id)arg3 session:(id)arg4;
- (bool)resolveWithError:(id*)arg1;
- (id)target;
- (id)targetServerZone;
- (id)writeUnderParent:(id)arg1 name:(id)arg2 error:(id*)arg3;

@end
