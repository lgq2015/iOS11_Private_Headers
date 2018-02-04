/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSavedGame : NSObject <NSCopying> {
    NSString * _deviceName;
    NSURL * _fileURL;
    NSDate * _modificationDate;
    NSString * _name;
}

@property (retain) NSString *deviceName;
@property (retain) NSURL *fileURL;
@property (retain) NSDate *modificationDate;
@property (retain) NSString *name;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceName;
- (id)fileURL;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (id)modificationDate;
- (id)name;
- (void)setDeviceName:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;

@end
