/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroupEmittingOperation : FCOperation {
    FCFeedGroupEmittingContext * _context;
    <NSCoding> * _cursor;
    NSString * _groupEmitterIdentifier;
    id /* block */  _groupEmittingCompletionHandler;
    <NSCoding> * _resultCursor;
    bool  _resultFinished;
    FCFeedGroup * _resultGroup;
    NSArray * _resultGroups;
    <NSCoding> * _toCursor;
}

@property (nonatomic, readonly) FCFeedGroupEmittingContext *context;
@property (nonatomic, readonly) <NSCoding> *cursor;
@property (nonatomic, readonly, copy) NSString *groupEmitterIdentifier;
@property (nonatomic, copy) id /* block */ groupEmittingCompletionHandler;
@property (nonatomic, retain) <NSCoding> *resultCursor;
@property (nonatomic) bool resultFinished;
@property (nonatomic, retain) FCFeedGroup *resultGroup;
@property (nonatomic, retain) NSArray *resultGroups;
@property (nonatomic, readonly) <NSCoding> *toCursor;

- (void).cxx_destruct;
- (id)context;
- (id)cursor;
- (id)groupEmitterIdentifier;
- (id /* block */)groupEmittingCompletionHandler;
- (id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (id)resultCursor;
- (bool)resultFinished;
- (id)resultGroup;
- (id)resultGroups;
- (void)setGroupEmittingCompletionHandler:(id /* block */)arg1;
- (void)setResultCursor:(id)arg1;
- (void)setResultFinished:(bool)arg1;
- (void)setResultGroup:(id)arg1;
- (void)setResultGroups:(id)arg1;
- (id)toCursor;

@end
