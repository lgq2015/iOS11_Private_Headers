/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSnapshotRequestHandle : NSObject {
    FBSSceneSnapshotRequestAction * _action;
    bool  _canceled;
    FBSSceneSnapshotContext * _context;
    unsigned long long  _type;
}

+ (id)handleForRequestType:(unsigned long long)arg1 context:(id)arg2;

- (void)_clearAction;
- (void)cancelRequest;
- (void)dealloc;
- (id)initWithRequestType:(unsigned long long)arg1 context:(id)arg2;
- (void)performRequestForScene:(id)arg1;

@end
