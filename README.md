# CXLCodingHelper
a simplest way to implement NSCoding 

# Usage

step 1:

add "self = [CXLCodingHelper decodeClass:self decoder:aDecoder]" in `- (id)initWithCoder:(NSCoder *)aDecoder`

step2:


add "[CXLCodingHelper encodeClass:self encoder:aCoder]" in `-(void)encodeWithCoder:(NSCoder *)aCoder`


step 3:

done! ^ ^


-------------



# Demo
`.m file`

``````````````````
#import "property.h"
 #import "CXLCodingHelper.h"

@implementation property

- (id)initWithCoder:(NSCoder *)aDecoder {
   self = [super init];
    if (!self) {
       return nil;
   }
   self = [CXLCodingHelper decodeClass:self decoder:aDecoder];
   return self; 
 }


 -(void)encodeWithCoder:(NSCoder *)aCoder {
     [CXLCodingHelper encodeClass:self encoder:aCoder]; 
 }
 ```````````````````
 