/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)airportFromSFAirport:(id)arg1;
+ (id)convertFlightModel:(id)arg1 withError:(id*)arg2;
+ (void)extractTimeForFlightStep:(id)arg1 fromLeg:(id)arg2 departure:(bool)arg3;
+ (void)loadFlightStructuresWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* block */)arg5;

@end
