/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextElementBlockAction : NTKUpNextElementDisplayAction {
    id /* block */  _action;
}

@property (nonatomic, readonly) id /* block */ action;

- (void).cxx_destruct;
- (void)_performWithContext:(id)arg1;
- (id /* block */)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAction:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;

@end
