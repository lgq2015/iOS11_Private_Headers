/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject

@property (nonatomic) bool bookable;
@property (nonatomic, retain) SADistance *relativeDistance;
@property (nonatomic, retain) SAMovieV2ShowtimeSnippet *showtimeSnippet;
@property (nonatomic, copy) NSString *theaterName;

+ (id)theaterShowtimeListCell;
+ (id)theaterShowtimeListCellWithDictionary:(id)arg1 context:(id)arg2;

- (bool)bookable;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)relativeDistance;
- (void)setBookable:(bool)arg1;
- (void)setRelativeDistance:(id)arg1;
- (void)setShowtimeSnippet:(id)arg1;
- (void)setTheaterName:(id)arg1;
- (id)showtimeSnippet;
- (id)theaterName;

@end
