/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedGroupDiff : NSObject {
    NSArray * _deletedElements;
    NSArray * _deletedHeadlines;
    NSString * _groupIdentifier;
    NSArray * _insertedElements;
    NSArray * _insertedHeadlines;
    NSArray * _modifiedElements;
    NSArray * _modifiedHeadlines;
}

@property (nonatomic, readonly, copy) NSArray *deletedElements;
@property (nonatomic, readonly, copy) NSArray *deletedHeadlines;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (nonatomic, readonly, copy) NSArray *insertedElements;
@property (nonatomic, readonly, copy) NSArray *insertedHeadlines;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly, copy) NSArray *modifiedElements;
@property (nonatomic, readonly, copy) NSArray *modifiedHeadlines;

- (void).cxx_destruct;
- (id)deletedElements;
- (id)deletedHeadlines;
- (id)groupIdentifier;
- (id)init;
- (id)initWithGroupIdentifier:(id)arg1 insertedElements:(id)arg2 deletedElements:(id)arg3 modifiedElements:(id)arg4;
- (id)insertedElements;
- (id)insertedHeadlines;
- (bool)isEmpty;
- (id)modifiedElements;
- (id)modifiedHeadlines;

@end
