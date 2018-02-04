/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTodayMarkAsReadTransaction : NSObject <FCTodayPrivateDataTransaction> {
    NSString * _articleID;
    long long  _articleVersion;
    NSDate * _readDate;
}

@property (nonatomic, copy) NSString *articleID;
@property (nonatomic) long long articleVersion;
@property (nonatomic, copy) NSDate *readDate;

- (void).cxx_destruct;
- (id)articleID;
- (long long)articleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)performWithPrivateDataContext:(id)arg1;
- (void)performWithTodayPrivateData:(id)arg1;
- (id)readDate;
- (void)setArticleID:(id)arg1;
- (void)setArticleVersion:(long long)arg1;
- (void)setReadDate:(id)arg1;

@end
