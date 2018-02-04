/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayLayoutService : NSObject <FBDisplayLayoutDelegate, FBDisplayLayoutServiceServerDelegate> {
    NSMutableDictionary * _layoutByDisplayType;
    FBDisplayLayoutServiceServer * _server;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_displayLayoutForDisplayType:(long long)arg1;
- (void)addLayoutElementAssertion:(id)arg1;
- (void)beginLayoutTransition:(id)arg1;
- (void)dealloc;
- (void)endLayoutTransition:(id)arg1;
- (void)flushLayoutForDisplayType:(long long)arg1;
- (id)init;
- (bool)isTransitioningForDisplayType:(long long)arg1;
- (id)layoutForDisplayType:(long long)arg1;
- (void)publishDisplayLayout:(id)arg1;
- (void)removeLayoutElementAssertion:(id)arg1;
- (id)server:(id)arg1 displayLayoutForDisplayType:(long long)arg2;
- (void)updateLayoutElementAssertion:(id)arg1;

@end
