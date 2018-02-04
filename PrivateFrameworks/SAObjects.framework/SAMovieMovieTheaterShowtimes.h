/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMovieMovieTheaterShowtimes : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *movieShowtimes;
@property (nonatomic, copy) NSArray *showtimes;
@property (readonly) Class superclass;
@property (nonatomic, retain) SALocalSearchBusiness2 *theater;

+ (id)movieTheaterShowtimes;
+ (id)movieTheaterShowtimesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieShowtimes;
- (void)setMovieShowtimes:(id)arg1;
- (void)setShowtimes:(id)arg1;
- (void)setTheater:(id)arg1;
- (id)showtimes;
- (id)theater;

@end
