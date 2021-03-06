/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSIPCallbackSerialization : NSObject {
    NSUUID * _UUID;
    id /* block */  _endBlock;
    bool  _hasBegun;
    bool  _hasEnded;
}

@property (nonatomic, copy) NSUUID *UUID;

- (id)UUID;
- (void)dealloc;
- (id)init;
- (void)sendBeginBlock:(id /* block */)arg1;
- (void)sendEndBlock:(id /* block */)arg1;
- (void)setUUID:(id)arg1;

@end
