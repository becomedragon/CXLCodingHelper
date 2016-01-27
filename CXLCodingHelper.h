//
//  CXLCodingHelper.h
//
//  Created by becomedragon on 9/19/15.
//  Copyright © 2015 CXL. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CXLCodingHelper : NSObject

+ (id)decodeClass:(id)object decoder:(NSCoder *)aDecoder;
+ (void)encodeClass:(id)object encoder:(NSCoder *)aCoder;
@end
