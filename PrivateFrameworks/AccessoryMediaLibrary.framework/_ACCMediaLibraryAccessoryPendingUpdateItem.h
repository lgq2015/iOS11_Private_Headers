/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
 */

@interface _ACCMediaLibraryAccessoryPendingUpdateItem : NSObject {
    id  _item;
    NSString * _libraryUID;
    NSString * _revision;
    int  _type;
}

@property (nonatomic, readonly) id item;
@property (nonatomic, readonly) NSString *libraryUID;
@property (nonatomic, readonly) NSString *revision;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithLibrary:(id)arg1 revision:(id)arg2 type:(int)arg3 item:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)item;
- (id)libraryUID;
- (id)revision;
- (int)type;

@end
