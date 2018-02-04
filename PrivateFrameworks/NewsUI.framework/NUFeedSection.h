/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUFeedSection : NSObject {
    NSMutableArray * _items;
}

@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) unsigned long long numberOfItems;

- (void).cxx_destruct;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)numberOfItems;

@end
