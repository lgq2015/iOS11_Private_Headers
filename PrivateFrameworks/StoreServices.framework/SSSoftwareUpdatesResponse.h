/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdatesResponse : NSObject {
    NSError * _error;
    bool  _failed;
    NSArray * _updateItems;
}

@property (readonly) NSError *error;
@property (getter=isFailed, readonly) bool failed;
@property (readonly) NSArray *updateItems;

- (id)copyUpdateItemDictionaries;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithError:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isFailed;
- (void)setUpdateItemsWithItemDictionaries:(id)arg1;
- (id)updateItems;

@end
