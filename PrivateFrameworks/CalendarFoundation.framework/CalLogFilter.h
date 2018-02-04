/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalLogFilter : NSObject {
    NSArray * _excludes;
    NSArray * _excludesAsRegexes;
    NSArray * _includes;
    NSArray * _includesAsRegexes;
    NSSet * _includesRegardlessOfLevel;
    int  _minimumLevel;
}

@property (nonatomic, copy) NSArray *excludes;
@property (nonatomic, retain) NSArray *excludesAsRegexes;
@property (nonatomic, copy) NSArray *includes;
@property (nonatomic, retain) NSArray *includesAsRegexes;
@property (nonatomic, copy) NSSet *includesRegardlessOfLevel;
@property (nonatomic) int minimumLevel;

- (void).cxx_destruct;
- (id)description;
- (id)excludes;
- (id)excludesAsRegexes;
- (id)generateRegexesForPatterns:(id)arg1;
- (id)includes;
- (id)includesAsRegexes;
- (id)includesRegardlessOfLevel;
- (id)init;
- (int)minimumLevel;
- (bool)proceedProcessingEnvelope:(id)arg1;
- (void)setExcludes:(id)arg1;
- (void)setExcludesAsRegexes:(id)arg1;
- (void)setIncludes:(id)arg1;
- (void)setIncludesAsRegexes:(id)arg1;
- (void)setIncludesRegardlessOfLevel:(id)arg1;
- (void)setMinimumLevel:(int)arg1;

@end
