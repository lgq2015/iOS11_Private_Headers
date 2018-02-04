/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {
    NSString * _MMCSDirPath;
    struct _mmcs_engine { } * _engine;
    NSString * _engineDirPath;
    NSString * _personID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct _mmcs_engine { }*engine;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personID;
@property (readonly) Class superclass;

+ (id)computeItemIDForAsset:(id)arg1;

- (void).cxx_destruct;
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;
- (void)_getItemDone:(unsigned long long)arg1 path:(id)arg2 error:(id)arg3;
- (id)_getUTIFromItem:(unsigned long long)arg1;
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;
- (void)_requestCompleted;
- (void)abort;
- (void)deactivate;
- (void)deactivateRemoveAllFiles:(bool)arg1;
- (void)dealloc;
- (void)didFinishUsingAssets:(id)arg1;
- (struct _mmcs_engine { }*)engine;
- (id)initWithPersonID:(id)arg1 path:(id)arg2;
- (id)personID;

@end
