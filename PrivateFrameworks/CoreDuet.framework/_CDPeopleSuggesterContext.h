/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPeopleSuggesterContext : NSObject <NSCopying> {
    NSString * _consumerIdentifier;
    NSString * _contactPrefix;
    NSDate * _date;
    NSString * _locationUUID;
    NSSet * _seedContactIdentifiers;
    NSString * _title;
}

@property (retain) NSString *consumerIdentifier;
@property (retain) NSString *contactPrefix;
@property (retain) NSDate *date;
@property (retain) NSString *locationUUID;
@property (retain) NSSet *seedContactIdentifiers;
@property (retain) NSString *title;

+ (id)currentContext;

- (void).cxx_destruct;
- (id)consumerIdentifier;
- (id)contactPrefix;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)init;
- (id)locationUUID;
- (id)seedContactIdentifiers;
- (void)setConsumerIdentifier:(id)arg1;
- (void)setContactPrefix:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setLocationUUID:(id)arg1;
- (void)setSeedContactIdentifiers:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end