/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioReportIssueRequest : RadioRequest {
    NSData * _data;
    NSString * _description;
    int  _issueType;
    SSURLConnectionRequest * _request;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithIssueType:(int)arg1 description:(id)arg2;
- (id)initWithIssueType:(int)arg1 description:(id)arg2 data:(id)arg3;
- (void)startWithCompletionHandler:(id /* block */)arg1;

@end
