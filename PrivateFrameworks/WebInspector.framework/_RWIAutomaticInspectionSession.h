/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWIAutomaticInspectionSession : NSObject {
    NSString * _applicationIdentifier;
    unsigned long long  _currentDebuggerIndex;
    NSArray * _debuggers;
    NSString * _identifier;
    NSNumber * _pageId;
}

@property (nonatomic, readonly, copy) NSArray *debuggers;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (void)_sendQuery;
- (id)debuggers;
- (id)identifier;
- (id)initWithPageId:(id)arg1 applicationIdentifier:(id)arg2 debuggers:(id)arg3;
- (bool)matchesPageId:(id)arg1 applicationIdentifier:(id)arg2;
- (bool)receivedRejectResponse;
- (void)start;

@end
