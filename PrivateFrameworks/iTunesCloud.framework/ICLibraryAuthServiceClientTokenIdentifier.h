/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying> {
    NSNumber * _DSID;
    NSString * _deviceGUID;
}

@property (nonatomic, readonly, copy) NSNumber *DSID;
@property (nonatomic, readonly, copy) NSString *deviceGUID;

- (void).cxx_destruct;
- (id)DSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceGUID;
- (id)initWithResponseDictionary:(id)arg1;

@end
