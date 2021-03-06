/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUComponents : NSObject {
    NSMutableArray * _mutableComponents;
}

@property (nonatomic, readonly) NSArray *components;
@property (nonatomic, readonly) NSMutableArray *mutableComponents;
@property (nonatomic, readonly) NSArray *reversedComponents;

- (void).cxx_destruct;
- (void)addComponent:(id)arg1;
- (id)components;
- (id)description;
- (id)init;
- (id)mutableComponents;
- (id)reversedComponents;

@end
