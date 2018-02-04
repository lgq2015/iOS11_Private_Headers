/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTagSearchRecordStream : NSObject <FCStreaming> {
    CKQueryCursor * _cursor;
    NSMutableSet * _encounteredRecordIDs;
    bool  _fetching;
    bool  _finished;
    id /* block */  _operationConstructor;
}

@property (nonatomic, retain) CKQueryCursor *cursor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *encounteredRecordIDs;
@property (nonatomic) bool fetching;
@property (getter=isFinished, nonatomic) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ operationConstructor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cursor;
- (id)encounteredRecordIDs;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)fetching;
- (id)init;
- (bool)isFinished;
- (id /* block */)operationConstructor;
- (void)setCursor:(id)arg1;
- (void)setEncounteredRecordIDs:(id)arg1;
- (void)setFetching:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setOperationConstructor:(id /* block */)arg1;

@end
