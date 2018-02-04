/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLEduCloudContainer : NSObject {
    id  _cloudToken;
    NSObject<OS_dispatch_queue> * _containerQueue;
    NSURL * _containerURL;
    NSURL * _documentsURL;
}

@property (nonatomic, retain) id cloudToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *containerQueue;
@property (nonatomic, retain) NSURL *containerURL;
@property (nonatomic, readonly) NSURL *documentsURL;

+ (id)sharedEduCloudContainer;

- (void).cxx_destruct;
- (bool)_addOrUpdateCloudEntryWithDictionary:(id)arg1 error:(id*)arg2;
- (bool)_coordinatedReadOfPromisesWithError:(id*)arg1;
- (bool)_writePlist:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)addBookItem:(id)arg1 error:(id*)arg2;
- (id)allBookItems;
- (id)bookItemForPath:(id)arg1;
- (id)bookItemForPermlink:(id)arg1;
- (id)bookItemsForPermlinks:(id)arg1;
- (id)cloudToken;
- (id)cloudUrlForPermlink:(id)arg1;
- (id)containerQueue;
- (id)containerURL;
- (id)dictionaryAsBookItem:(id)arg1 path:(id)arg2;
- (id)documentsURL;
- (id)fileNameForPermlink:(id)arg1;
- (id)init;
- (bool)isSignedIn;
- (id)performMetadataActionOnCloudURL:(id)arg1 action:(id /* block */)arg2;
- (bool)removeBookItem:(id)arg1 error:(id*)arg2;
- (void)setCloudToken:(id)arg1;
- (void)setContainerQueue:(id)arg1;
- (void)setContainerURL:(id)arg1;
- (bool)updateBookItem:(id)arg1 error:(id*)arg2;

@end
