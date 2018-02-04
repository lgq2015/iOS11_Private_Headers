/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAEmailSearch : SADomainCommand

@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *fromEmail;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int status;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSString *timeZoneId;
@property (nonatomic, copy) NSString *toEmail;

+ (id)search;
+ (id)searchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)endDate;
- (id)fromEmail;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEndDate:(id)arg1;
- (void)setFromEmail:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (void)setToEmail:(id)arg1;
- (id)startDate;
- (int)status;
- (id)subject;
- (id)timeZoneId;
- (id)toEmail;

@end
