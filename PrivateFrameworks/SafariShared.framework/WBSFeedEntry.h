/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSFeedEntry : NSObject <NSSecureCoding> {
    NSString * _content;
    NSDate * _datePublished;
    NSDate * _dateUpdated;
    NSString * _entryDescription;
    NSString * _identifier;
    NSString * _title;
    NSString * _urlString;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDate *datePublished;
@property (nonatomic, copy) NSDate *dateUpdated;
@property (nonatomic, copy) NSString *entryDescription;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *urlString;

+ (id)dateFromAtomDateString:(id)arg1;
+ (id)dateFromRSSDateString:(id)arg1;
+ (id)feedEntryWithAtomFeedElement:(id)arg1;
+ (id)feedEntryWithRSSFeedElement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)datePublished;
- (id)dateUpdated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entryDescription;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 urlString:(id)arg2;
- (void)setContent:(id)arg1;
- (void)setDatePublished:(id)arg1;
- (void)setDateUpdated:(id)arg1;
- (void)setEntryDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)urlString;

@end
