/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPDaemonQueryToken : NSObject <NSCopying> {
    <SPDaemonQueryDelegate> * _delegate;
    bool  _didReissue;
    NSString * _fbq;
    bool  _gotQueryComplete;
    bool  _isLocalQuery;
    SPSearchQuery * _query;
    bool  _queryFinished;
    unsigned int  _queryID;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _web_fbq;
}

@property (nonatomic, readonly) <SPDaemonQueryDelegate> *delegate;
@property (nonatomic) bool didReissue;
@property (readonly) NSString *fbq;
@property (nonatomic, readonly) bool gotQueryComplete;
@property (nonatomic) bool isLocalQuery;
@property (nonatomic, readonly) SPSearchQuery *query;
@property bool queryFinished;
@property (nonatomic, readonly) unsigned int queryID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSString *web_fbq;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (bool)didReissue;
- (id)fbq;
- (bool)gotQueryComplete;
- (void)handleLocalQueryWithResultSet:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)initWithQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (bool)isLocalQuery;
- (id)query;
- (void)queryDidComplete;
- (bool)queryFinished;
- (unsigned int)queryID;
- (id)queue;
- (void)setDidReissue:(bool)arg1;
- (void)setIsLocalQuery:(bool)arg1;
- (void)setQueryFinished:(bool)arg1;
- (id)web_fbq;

@end
