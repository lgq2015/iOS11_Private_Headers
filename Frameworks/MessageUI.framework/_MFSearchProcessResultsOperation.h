/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFSearchProcessResultsOperation : NSOperation {
    id /* block */  _completionBlock;
    <_MFSearchResultsConsumer> * _consumer;
    unsigned long long  _type;
}

+ (id)operationWithResultsOfType:(unsigned long long)arg1 completion:(id /* block */)arg2 consumer:(id)arg3;

- (void)dealloc;
- (void)main;

@end
